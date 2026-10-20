// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041469F .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_0041469f_0041469F() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0bch]
        lea edi, [esi + 0bch]
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x4146ef
        __asm _emit 0x74
        __asm _emit 0x3b
        push 0
        push eax
        ; Exact mapped bytes E8 A8 7E 01 00: call 0x42c564
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF 52 48: call dword ptr [edx + 0x48]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x4146e3
        __asm _emit 0x74
        __asm _emit 0x1b
        test byte ptr [esi + 2dh], 40h
        ; Exact mapped bytes 75 46: jne 0x414714
        __asm _emit 0x75
        __asm _emit 0x46
        push 3
        push dword ptr [edi]
        ; Exact mapped bytes E8 8D 7E 01 00: call 0x42c564
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF 52 48: call dword ptr [edx + 0x48]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 75 31: jne 0x414714
        __asm _emit 0x75
        __asm _emit 0x31
        push 1
        push dword ptr [edi]
        ; Exact mapped bytes E8 78 7E 01 00: call 0x42c564
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        and dword ptr [edi], 0
        mov eax, dword ptr [esi + 8]
        push edi
        push dword ptr [eax + 4]
        ; Exact mapped bytes E8 7B 7E 01 00: call 0x42c576
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        mov ebx, eax
        mov eax, dword ptr [esi]
        push ebx
        mov ecx, esi
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x414714
        __asm _emit 0x75
        __asm _emit 0x0b
        push dword ptr [edi]
        push dword ptr [esi + 8]
        push ebx
        ; Exact mapped bytes E8 02 D2 FF FF: call 0x411916
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ret
    }
}
