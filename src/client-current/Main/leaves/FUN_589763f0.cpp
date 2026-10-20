// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589763F0 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_589763f0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push esi
        mov esi, dword ptr [esp + 0ch]
        push edi
        cmp ebx, 1
        mov edi, dword ptr [esi + 4]
        ; Exact mapped bytes 74 16: je 0x58976419
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [esi]
        push esi
        mov dword ptr [eax + 14h], 0eh
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 18h], ebx
        mov edx, dword ptr [esi]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        add esp, 4
        push 78h
        push ebx
        push esi
        ; Exact mapped bytes E8 6E FC FF FF: call 0x58976090
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 28h]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [esp + 30h]
        mov dword ptr [eax + 8], edx
        mov dl, byte ptr [esp + 24h]
        mov dword ptr [eax], 0
        mov dword ptr [eax + 0ch], ecx
        mov byte ptr [eax + 20h], dl
        mov byte ptr [eax + 22h], 0
        mov ecx, dword ptr [edi + 44h]
        add esp, 0ch
        mov dword ptr [eax + 24h], ecx
        mov dword ptr [edi + 44h], eax
        pop edi
        pop esi
        pop ebx
        ret
    }
}
