// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58FAC690 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_58fac690() {
    __asm {
        ; Exact mapped bytes F3 A4: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa4
        ; Exact mapped bytes 66 0F A4 DF AC: shld di, bx, 0xac
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xa4
        __asm _emit 0xdf
        __asm _emit 0xac
        ; Exact mapped bytes 9D: popfd
        __asm _emit 0x9d
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes BF EB 6C F6 68: mov edi, 0x68f66ceb
        __asm _emit 0xbf
        __asm _emit 0xeb
        __asm _emit 0x6c
        __asm _emit 0xf6
        __asm _emit 0x68
        ; Exact mapped bytes 0F B7 F9: movzx edi, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xf9
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes E9 64 88 CD FF: jmp 0x58c84f0b
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x88
        __asm _emit 0xcd
        __asm _emit 0xff
    }
}
