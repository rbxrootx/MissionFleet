// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ECE00 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_004ece00_004ECE00() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d774h
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
        sub esp, 10h
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 6E E4 00 00: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c7e7ch
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 5c7e74h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D8 7C 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 1D 7F 04 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x7f
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 CA 7C 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F6 50 04 00: call 0x531f4f
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x50
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8E 8A 00 00 00: jle 0x4eceeb
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 9E 40 04 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 8F 40 04 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5C 6B 04 00: call 0x5339e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x6b
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 43: je 0x4eced0
        __asm _emit 0x74
        __asm _emit 0x43
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 67 FC FF FF: call 0x4ecb08
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 10h]
        push eax
        push 5c7e8ch
        lea ecx, [ebp - 14h]
        push ecx
        push 5c7e88h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 60 7C 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 24 0B 00 00: call 0x4ed9e5
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 53 7C 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 17 0B 00 00: call 0x4ed9e5
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB B7: jmp 0x4ece87
        __asm _emit 0xeb
        __asm _emit 0xb7
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 70 09 00 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 61 09 00 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c7e94h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 23 7C 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
