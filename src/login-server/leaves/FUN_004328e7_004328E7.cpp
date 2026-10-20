// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004328E7 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_004328e7_004328E7() {
    __asm {
        mov eax, dword ptr [esp + 4]
        ; Exact mapped bytes 66 81 78 02 FF FF: cmp word ptr [eax + 2], 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 05: jne 0x4328f8
        __asm _emit 0x75
        __asm _emit 0x05
        add eax, 1ah
        ; Exact mapped bytes EB 03: jmp 0x4328fb
        __asm _emit 0xeb
        __asm _emit 0x03
        add eax, 12h
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        push 2
        ; Exact mapped bytes 66 81 F9 FF FF: cmp cx, 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        pop edx
        ; Exact mapped bytes 75 12: jne 0x43291a
        __asm _emit 0x75
        __asm _emit 0x12
        add eax, 4
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 81 F9 FF FF: cmp cx, 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 11: jne 0x432926
        __asm _emit 0x75
        __asm _emit 0x11
        add eax, 4
        ; Exact mapped bytes EB 18: jmp 0x432932
        __asm _emit 0xeb
        __asm _emit 0x18
        add eax, edx
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 EA: je 0x43290b
        __asm _emit 0x74
        __asm _emit 0xea
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes EB F4: jmp 0x43291a
        __asm _emit 0xeb
        __asm _emit 0xf4
        add eax, edx
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 05: je 0x432932
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes EB F4: jmp 0x432926
        __asm _emit 0xeb
        __asm _emit 0xf4
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        add eax, edx
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 F6: jne 0x432932
        __asm _emit 0x75
        __asm _emit 0xf6
        ret
    }
}
