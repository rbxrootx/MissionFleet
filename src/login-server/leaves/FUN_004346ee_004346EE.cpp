// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004346EE .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_004346ee_004346EE() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        push esi
        push edi
        test ebx, ebx
        mov esi, ecx
        ; Exact mapped bytes 74 7A: je 0x434777
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [esi + 24h]
        mov edi, dword ptr [esi + 28h]
        sub edi, eax
        cmp ebx, edi
        ; Exact mapped bytes 73 02: jae 0x43470b
        __asm _emit 0x73
        __asm _emit 0x02
        mov edi, ebx
        push edi
        push dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 AB A4 FE FF: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        add dword ptr [esi + 24h], edi
        add dword ptr [ebp + 8], edi
        add esp, 0ch
        sub ebx, edi
        ; Exact mapped bytes 74 55: je 0x434777
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, esi
        ; Exact mapped bytes E8 55 00 00 00: call 0x43477e
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebx
        xor edx, edx
        div dword ptr [esi + 1ch]
        mov ecx, dword ptr [esi + 20h]
        mov edi, ebx
        mov eax, dword ptr [ecx]
        sub edi, edx
        push edi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 38: call dword ptr [eax + 0x38]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x38
        add dword ptr [ebp + 8], edi
        sub ebx, edi
        cmp dword ptr [esi + 8], 0
        ; Exact mapped bytes 74 1A: je 0x434765
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [esi + 20h]
        lea eax, [esi + 28h]
        lea edi, [esi + 2ch]
        push eax
        mov edx, dword ptr [ecx]
        push edi
        push dword ptr [esi + 1ch]
        push 1
        ; Exact mapped bytes FF 52 50: call dword ptr [edx + 0x50]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x50
        mov eax, dword ptr [edi]
        mov dword ptr [esi + 24h], eax
        push ebx
        push dword ptr [ebp + 8]
        push dword ptr [esi + 24h]
        ; Exact mapped bytes E8 4F A4 FE FF: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        add dword ptr [esi + 24h], ebx
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
