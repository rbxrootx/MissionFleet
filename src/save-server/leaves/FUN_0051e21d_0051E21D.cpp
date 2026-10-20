// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051E21D .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_0051e21d_0051E21D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 28h], ecx
        push 6
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push 5
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 70 39 01 00: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        push 21h
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push 20h
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 56 39 01 00: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A1 5C 71 68 00: mov eax, dword ptr [0x68715c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 8B 0D 58 71 68 00: mov ecx, dword ptr [0x687158]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        sub ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5B 3F 01 00: call 0x5321d5
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 0C 80 FB FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 40600h
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x51e2a1
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 1ch]
        sub ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        sub edx, dword ptr [ebp - 18h]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D1 42 01 00: call 0x532572
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 30 DB 00 00: call 0x52bdd9
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 0E 41 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 05 6B 01 00: call 0x534dc2
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 5C DB 00 00: call 0x52be25
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
