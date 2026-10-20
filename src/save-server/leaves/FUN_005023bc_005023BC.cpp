// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005023BC .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_005023bc_005023BC() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d7d4h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 24h
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp - 30h]
        cmp dword ptr [eax + 98h], 0
        ; Exact mapped bytes 0F 84 86 00 00 00: je 0x502470
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F5 E4 FF FF: call 0x5008ef
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes E8 BF 52 02 00: call 0x5276c7
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 F4 28 02 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 41: je 0x502461
        __asm _emit 0x74
        __asm _emit 0x41
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ecx + 98h]
        ; Exact mapped bytes E8 BF 6B FC FF: call 0x4c8ff9
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x6b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 75 1D: jne 0x50245f
        __asm _emit 0x75
        __asm _emit 0x1d
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 98 A6 FC FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xa6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 8F A4 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xa4
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 19: jmp 0x502478
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes EB B9: jmp 0x50241a
        __asm _emit 0xeb
        __asm _emit 0xb9
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 7C A4 FC FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xa4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 DA A2 FC FF: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xa2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
