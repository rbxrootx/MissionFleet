// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041460A .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_0041460a_0041460A() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 94h]
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x414622
        __asm _emit 0x75
        __asm _emit 0x08
        push 3
        pop ebx
        push 1
        pop ebp
        ; Exact mapped bytes EB 0E: jmp 0x414630
        __asm _emit 0xeb
        __asm _emit 0x0e
        cmp eax, 1
        ; Exact mapped bytes 75 04: jne 0x41462b
        __asm _emit 0x75
        __asm _emit 0x04
        push 2
        ; Exact mapped bytes EB 02: jmp 0x41462d
        __asm _emit 0xeb
        __asm _emit 0x02
        push 4
        pop ebp
        mov ebx, ebp
        mov ecx, esi
        ; Exact mapped bytes E8 E5 07 00 00: call 0x414e1c
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push ebx
        push 1
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 6E 7F 01 00: call 0x42c5b2
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes 66 83 FF 02: cmp di, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x02
        ; Exact mapped bytes 74 EB: je 0x414637
        __asm _emit 0x74
        __asm _emit 0xeb
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x414664
        __asm _emit 0x75
        __asm _emit 0x0c
        push dword ptr [esi + 4]
        push dword ptr [esi + 8]
        push edi
        ; Exact mapped bytes E8 B2 D2 FF FF: call 0x411916
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 FF 63: cmp di, 0x63
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x63
        ; Exact mapped bytes 75 0A: jne 0x414674
        __asm _emit 0x75
        __asm _emit 0x0a
        push dword ptr [esi + 4]
        mov ecx, esi
        ; Exact mapped bytes E8 3F 03 00 00: call 0x4149b3
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 FF 01: cmp di, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x01
        ; Exact mapped bytes 75 19: jne 0x414693
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [esi + 0b4h]
        ; Exact mapped bytes 66 39 28: cmp word ptr [eax], bp
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x28
        ; Exact mapped bytes 74 0E: je 0x414693
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [esi]
        push 0
        push 400h
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        mov ecx, esi
        ; Exact mapped bytes E8 BC 07 00 00: call 0x414e56
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
