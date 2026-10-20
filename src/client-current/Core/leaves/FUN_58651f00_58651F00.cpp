// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58651F00 .. +0x181 bytes.
extern "C" __declspec(naked) void FUN_58651f00_58651F00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 0F BF 05 38 05 96 58: movsx eax, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, 3
        ; Exact mapped bytes 0F 85 64 01 00 00: jne 0x5865207d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 9E 16 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x9e
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 10 20 96 58: mov edx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        push 0
        ; Exact mapped bytes 8B 0D 10 20 96 58: mov ecx, dword ptr [0x58962010]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 55 F8: call dword ptr [ebp - 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf8
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 210h]
        ; Exact mapped bytes E8 FD 41 EF FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x41
        __asm _emit 0xef
        __asm _emit 0xff
        cmp eax, -1
        ; Exact mapped bytes 75 61: jne 0x58651fb9
        __asm _emit 0x75
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24ch]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D2 D8 E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xd8
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 250h]
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BC D8 E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd8
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 254h]
        mov dword ptr [ebp - 14h], edx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A6 D8 E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd8
        __asm _emit 0xe4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 234h]
        mov dword ptr [ebp - 18h], ecx
        push 588af4cah
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 ED 40 E3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x40
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x5865207d
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 210h]
        ; Exact mapped bytes E8 89 41 EF FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 45: jne 0x58652010
        __asm _emit 0x75
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24ch]
        mov dword ptr [ebp - 1ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5F D8 E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xd8
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 250h]
        mov dword ptr [ebp - 20h], eax
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 49 D8 E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xd8
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 254h]
        mov dword ptr [ebp - 24h], edx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 33 D8 E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xd8
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 43: jmp 0x58652053
        __asm _emit 0xeb
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24ch]
        mov dword ptr [ebp - 28h], ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 1A D8 E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xd8
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 250h]
        mov dword ptr [ebp - 2ch], eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 04 D8 E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xd8
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 254h]
        mov dword ptr [ebp - 30h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 EE D7 E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xd7
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 234h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 210h]
        ; Exact mapped bytes E8 B3 AB FD FF: call 0x5862cc20
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 24 40 E3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
