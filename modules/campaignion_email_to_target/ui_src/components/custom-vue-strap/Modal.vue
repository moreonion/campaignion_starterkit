<template>
  <div role="dialog"
    v-bind:class="{
    'modal':true,
    'fade':effect === 'fade',
    'zoom':effect === 'zoom'
    }"
    >
    <div v-bind:class="{'modal-dialog':true,'modal-lg':large,'modal-sm':small}" role="document"
      v-bind:style="{width: optionalWidth}">
      <div class="modal-content">
        <slot name="modal-header">
          <div class="modal-header">
            <button type="button" class="close" @click="close"><span>&times;</span></button>
            <h4 class="modal-title" >{{title}}</h4>
          </div>
        </slot>
        <slot name="modal-body">
          <div class="modal-body"></div>
        </slot>
        <slot name="modal-footer">
          <div class="modal-footer" v-if="!noFooter">
            <button type="button" class="btn btn-default" @click="close">{{ buttonText.close }}</button>
            <button type="button" class="btn btn-primary" :disabled="waiting" @click="callback"><spin-kit v-if="waiting"></spin-kit>{{ buttonText.save }}</button>
          </div>
        </slot>
      </div>
    </div>
  </div>
</template>

<script>
import getScrollBarWidth from './utils/getScrollBarWidth.vue'
import EventListener from './utils/EventListener.vue'

  export default {
    components: {
      spinKit: require('../shared/spinner.vue')
    },
    props: {
      title: {
        type: String,
        default: ''
      },
      show: {
        require: true,
        type: Boolean,
        twoWay: true
      },
      width: {
        default: null
      },
      callback: {
        type: Function,
        default() {}
      },
      effect: {
        type: String,
        default: null
      },
      backdrop: {
        type: Boolean,
        default: true
      },
      large: {
        type: Boolean,
        default: false
      },
      small: {
        type: Boolean,
        default: false
      },
      noFooter: {
        type: Boolean,
        default: false
      },
      buttonText: {
        type: Object,
        default: function() {
          return {
            close: 'Close',
            save: 'Save changes'
          };
        }
      },
      waiting: {
        type: Boolean,
        default: false
      }
    },
    ready() {
      this.$watch('show', (val)=> {
        const el = this.$el
        const body = document.body
        const scrollBarWidth =  getScrollBarWidth()
        if (val) {
          el.querySelector('.modal-content').focus()
          el.style.display = 'block'
          setTimeout(()=> el.classList.add('in'), 0)
          body.classList.add('modal-open')
          if (scrollBarWidth !== 0) {
            body.style.right = scrollBarWidth + 'px'
          }
          /*
          if (this.backdrop) {
            this._blurModalContentEvent = EventListener.listen(this.$el, 'click', (e)=> {
              if (e.target === el) this.show = false
            })
          }
          */
        } else {
          if (this._blurModalContentEvent) this._blurModalContentEvent.remove()
          el.classList.remove('in')
          setTimeout(()=> {
            el.style.display = 'none'
            body.classList.remove('modal-open')
            body.style.right = '0'
          }, 300)
        }
      }, { immediate: true })
    },
    computed: {
      optionalWidth: function() {
        if( this.width === null ) {
          return null;
        } else if( Number.isInteger(this.width) ) {
          return this.width + "px";
        }
        return this.width;
      },
    },
    methods: {
      close() {
        this.waiting = false
        this.show = false
      }
    }
  }
</script>
<style>
body.modal-open {
  position: fixed;
  left: 0;
  right: 0;
}
body.modal-open .modal {
  overflow-x: hidden;
  overflow-y: auto;
}
.modal {
  transition: all 0.3s ease;
}
.modal.in {
  background-color: rgba(0,0,0,0.5);
}
.modal.zoom .modal-dialog {
    -webkit-transform: scale(0.1);
    -moz-transform: scale(0.1);
    -ms-transform: scale(0.1);
    transform: scale(0.1);
    top: 300px;
    opacity: 0;
    -webkit-transition: all 0.3s;
    -moz-transition: all 0.3s;
    transition: all 0.3s;
}
.modal.zoom.in .modal-dialog {
    -webkit-transform: scale(1);
    -moz-transform: scale(1);
    -ms-transform: scale(1);
    transform: scale(1);
    -webkit-transform: translate3d(0, -300px, 0);
    transform: translate3d(0, -300px, 0);
    opacity: 1;
}
.btn .sk-fading-circle {
    width: 25px;
    height: 25px;
    margin: 0 20px 0 0;
    display: inline-block;
    vertical-align: middle;
}
.btn-primary .sk-circle:before {
    background-color: #fff;
}
</style>
