// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890DE80 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_5890de80() {
    __asm {
        mov eax, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 4]
        push esi
        push edi
        push 40h
        xor edi, edi
        push edi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 20h]
        push eax
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 00 53 FF FF: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi + 64h], eax
        mov eax, 3
        mov dword ptr [esi + 68h], eax
        mov dword ptr [esi + 6ch], eax
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [esi + 50h], eax
        mov eax, dword ptr [esp + 10h]
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], edi
        mov dword ptr [esi + 5ch], edi
        mov dword ptr [esi], 589a2d04h
        mov dword ptr [esi + 70h], edi
        mov dword ptr [esi + 74h], eax
        cmp eax, edi
        ; Exact mapped bytes 74 26: je 0x5890df00
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [esi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [esi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [esi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [esi + 20h], edx
        pop edi
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
