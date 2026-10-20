// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004329F5 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_004329f5_004329F5() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        ; Exact mapped bytes 66 81 7E 02 FF FF: cmp word ptr [esi + 2], 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 75 05: jne 0x432a07
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [esi + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x432a09
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, dword ptr [esi]
        test al, 40h
        ; Exact mapped bytes 75 04: jne 0x432a11
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop esi
        ret
        push esi
        ; Exact mapped bytes E8 D0 FE FF FF: call 0x4328e7
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 14h]
        pop ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        push 0
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        xor ecx, ecx
        ; Exact mapped bytes 66 81 7E 02 FF FF: cmp word ptr [esi + 2], 0xffff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 20h
        push 20h
        setne cl
        dec ecx
        and ecx, 2
        inc ecx
        lea esi, [eax + ecx*2]
        mov ecx, dword ptr [esp + 1ch]
        ; Exact mapped bytes E8 A6 B5 FF FF: call 0x42dfec
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push -1
        push esi
        push 0
        push 0
        ; Exact mapped bytes FF 15 88 C2 43 00: call dword ptr [0x43c288]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        push -1
        ; Exact mapped bytes E8 65 B5 FF FF: call 0x42dfc4
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        pop eax
        pop esi
        ret
    }
}
