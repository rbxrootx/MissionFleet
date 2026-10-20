// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A1470 .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_587a1470() {
    __asm {
        push -1
        push 5898081eh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, ecx
        mov dword ptr [esp + 14h], ebp
        mov dword ptr [ebp], 5899853ch
        mov eax, dword ptr [ebp + 6ch]
        mov ecx, dword ptr [eax + 4]
        lea esi, [ebp + 54h]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 24h], 2
        ; Exact mapped bytes E8 C5 51 FE FF: call 0x58786680
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 18h]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [esi + 18h]
        xor ebx, ebx
        mov dword ptr [esi + 1ch], ebx
        mov dword ptr [eax], eax
        mov eax, dword ptr [esi + 18h]
        mov dword ptr [eax + 8], eax
        mov edx, dword ptr [ebp + 8ch]
        mov eax, dword ptr [edx + 4]
        lea edi, [ebp + 74h]
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 9B 51 FE FF: call 0x58786680
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [edi + 18h]
        mov dword ptr [eax + 4], eax
        mov eax, dword ptr [edi + 18h]
        mov dword ptr [edi + 1ch], ebx
        mov dword ptr [eax], eax
        mov eax, dword ptr [edi + 18h]
        mov dword ptr [eax + 8], eax
        mov eax, dword ptr [ebp + 50h]
        cmp eax, ebx
        ; Exact mapped bytes 74 0C: je 0x587a150c
        __asm _emit 0x74
        __asm _emit 0x0c
        push eax
        ; Exact mapped bytes E8 20 B9 1D 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xb9
        __asm _emit 0x1d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp + 50h], ebx
        mov ecx, edi
        mov byte ptr [esp + 20h], 1
        ; Exact mapped bytes E8 C8 FE FF FF: call 0x587a13e0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes E8 BD FE FF FF: call 0x587a13e0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, ebp
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 2E 18 16 00: call 0x58902d60
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x18
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ret
    }
}
