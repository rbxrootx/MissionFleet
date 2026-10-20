// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58649980 .. +0x181 bytes.
extern "C" __declspec(naked) void FUN_58649980_58649980() {
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
        cmp eax, 6
        ; Exact mapped bytes 0F 85 64 01 00 00: jne 0x58649afd
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
        ; Exact mapped bytes E8 15 24 17 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x17
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
        mov ecx, dword ptr [edx + 240h]
        ; Exact mapped bytes E8 7D C7 EF FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xc7
        __asm _emit 0xef
        __asm _emit 0xff
        cmp eax, -1
        ; Exact mapped bytes 75 61: jne 0x58649a39
        __asm _emit 0x75
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 27ch]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 52 5E E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x5e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 280h]
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3C 5E E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x5e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 284h]
        mov dword ptr [ebp - 14h], edx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 26 5E E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 264h]
        mov dword ptr [ebp - 18h], ecx
        push 588af33eh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6D C6 E3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc6
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x58649afd
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 240h]
        ; Exact mapped bytes E8 09 C7 EF FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xc7
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 45: jne 0x58649a90
        __asm _emit 0x75
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 27ch]
        mov dword ptr [ebp - 1ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 DF 5D E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x5d
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 280h]
        mov dword ptr [ebp - 20h], eax
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C9 5D E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x5d
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 284h]
        mov dword ptr [ebp - 24h], edx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B3 5D E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x5d
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 43: jmp 0x58649ad3
        __asm _emit 0xeb
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 27ch]
        mov dword ptr [ebp - 28h], ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 9A 5D E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x5d
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 280h]
        mov dword ptr [ebp - 2ch], eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 84 5D E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x5d
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 284h]
        mov dword ptr [ebp - 30h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 6E 5D E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x5d
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 264h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 240h]
        ; Exact mapped bytes E8 33 31 FE FF: call 0x5862cc20
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 A4 C5 E3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc5
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
