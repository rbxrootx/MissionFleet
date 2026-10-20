// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431EB4 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_00431eb4_00431EB4() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        mov esi, ecx
        test edi, edi
        ; Exact mapped bytes 7F 41: jg 0x431f03
        __asm _emit 0x7f
        __asm _emit 0x41
        push edi
        ; Exact mapped bytes E8 65 02 00 00: call 0x43212d
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        and dword ptr [ebp + 8], 0
        test ecx, ecx
        ; Exact mapped bytes 74 3A: je 0x431f10
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        test eax, eax
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes 74 2E: je 0x431f10
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [esi + 80h]
        lea edx, [ebp + 8]
        push edx
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov edx, dword ptr [eax]
        mov ecx, eax
        ; Exact mapped bytes FF 92 88 00 00 00: call dword ptr [edx + 0x88]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 E1: jne 0x431ee2
        __asm _emit 0x75
        __asm _emit 0xe1
        ; Exact mapped bytes EB 0D: jmp 0x431f10
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp edi, 1
        ; Exact mapped bytes 75 08: jne 0x431f10
        __asm _emit 0x75
        __asm _emit 0x08
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 1D 02 00 00: call 0x43212d
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        cmp edi, 1
        pop edi
        pop esi
        setl al
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
