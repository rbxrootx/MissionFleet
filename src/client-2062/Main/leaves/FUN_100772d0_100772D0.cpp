// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100772D0 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_100772d0_100772D0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        push edi
        mov edi, dword ptr [ecx + 4]
        lea edx, [eax + eax*4]
        lea eax, [eax + eax*4 + 104h]
        add edi, 154h
        mov edx, dword ptr [ecx + edx*4 + 40ch]
        mov esi, dword ptr [ecx + eax*4]
        cmp edx, esi
        ; Exact mapped bytes 74 38: je 0x1007732f
        __asm _emit 0x74
        __asm _emit 0x38
        push ebx
        lea eax, [esi + esi*4]
        lea ebx, [edx + edx*4]
        add esi, edx
        lea eax, [eax + eax*4]
        xor edx, edx
        lea ebx, [ebx + ebx*4]
        shl eax, 2
        shl ebx, 2
        sub eax, ebx
        pop ebx
        div esi
        lea edx, [eax + eax*2]
        lea edx, [eax + edx*4]
        mov eax, 51eb851fh
        shl edx, 3
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        add edi, edx
        mov ecx, dword ptr [ecx + 3e8h]
        push edi
        ; Exact mapped bytes E8 15 7A 08 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x7a
        __asm _emit 0x08
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
