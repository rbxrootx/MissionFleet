// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589719AE .. +0x9A bytes.
extern "C" __declspec(naked) void _Init() {
    __asm {
        push 8
        mov eax, 5898ad4ch
        ; Exact mapped bytes E8 86 BB 00 00: call 0x5897d540
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B0 85 A2 58: mov eax, dword ptr [0x58a285b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        mov esi, eax
        test eax, eax
        ; Exact mapped bytes 75 7B: jne 0x58971a40
        __asm _emit 0x75
        __asm _emit 0x7b
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 32 FD FF FF: call 0x58971700
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 B0 85 A2 58: mov eax, dword ptr [0x58a285b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        and dword ptr [ebp - 4], esi
        mov esi, eax
        test eax, eax
        ; Exact mapped bytes 75 58: jne 0x58971a34
        __asm _emit 0x75
        __asm _emit 0x58
        push 34h
        ; Exact mapped bytes E8 6B B2 00 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, eax
        mov dword ptr [ebp - 14h], ecx
        mov byte ptr [ebp - 4], 1
        test ecx, ecx
        ; Exact mapped bytes 74 0A: je 0x589719fb
        __asm _emit 0x74
        __asm _emit 0x0a
        push esi
        ; Exact mapped bytes E8 10 FF FF FF: call 0x58971907
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes EB 02: jmp 0x589719fd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push esi
        mov byte ptr [ebp - 4], 0
        ; Exact mapped bytes E8 DB FD FF FF: call 0x589717e2
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esi + 18h]
        mov dword ptr [esi + 10h], 3fh
        mov dword ptr [esp], 589a2f24h
        ; Exact mapped bytes E8 23 37 DC FF: call 0x58735140
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x37
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes 89 35 B4 85 A2 58: mov dword ptr [0x58a285b4], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xb4
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 2C E5 FF: call 0x587c46f0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x2c
        __asm _emit 0xe5
        __asm _emit 0xff
        ; Exact mapped bytes A1 B4 85 A2 58: mov eax, dword ptr [0x58a285b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A3 CC 85 A2 58: mov dword ptr [0x58a285cc], eax
        __asm _emit 0xa3
        __asm _emit 0xcc
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        or dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E8 FC FF FF: call 0x58971728
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes E8 2C BB 00 00: call 0x5897d573
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        ret
    }
}
