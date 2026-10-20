// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056EE7C .. +0xE4 bytes.
extern "C" __declspec(naked) void FUN_0056ee7c_0056EE7C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ff63h
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
        push ecx
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov eax, dword ptr [ebp + 8]
        sub eax, 0dch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 8007000eh
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 53 AA FF FF: call 0x569919
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], ecx
        push 9fdh
        push 5d053ch
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 7E C2 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xc2
        __asm _emit 0xf8
        __asm _emit 0xff
        push 58a178h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A1 C1 F8 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 19: jne 0x56ef11
        __asm _emit 0x75
        __asm _emit 0x19
        push 9feh
        push 5d053ch
        ; Exact mapped bytes E8 F9 5A FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x5a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 01: je 0x56ef11
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CB: jne 0x56eee2
        __asm _emit 0x75
        __asm _emit 0xcb
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 39: jmp 0x56ef59
        __asm _emit 0xeb
        __asm _emit 0x39
        push 584850h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 63 C1 F8 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56ef45
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a01h
        push 5d053ch
        ; Exact mapped bytes E8 C0 5A FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x5a
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56ef45
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x56ef20
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 45 BF F8 FF: call 0x4fae98
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xbf
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, 56ef59h
        ret
        mov dword ptr [ebp - 4], 0ffffffffh
    }
}
