// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586110B0 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_586110b0_586110B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C F3 F9 FF: call 0x585b03d0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xf3
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 95 F4 F9 FF: call 0x585b0560
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2F: je 0x586110fe
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 60 EC FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x60
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8F AF E7 FF: call 0x5848c070
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xaf
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F2 4D E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x4d
        __asm _emit 0xe7
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 BF F9 FF: call 0x585ad000
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xbf
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x5861112b
        __asm _emit 0xeb
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 60 EC FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x60
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 60 AF E7 FF: call 0x5848c070
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xaf
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C3 4D E7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x4d
        __asm _emit 0xe7
        __asm _emit 0xff
        push 0fh
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D6 BE F9 FF: call 0x585ad000
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xbe
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        push 28h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 39 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x39
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 71 AC 1A 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xac
        __asm _emit 0x1a
        __asm _emit 0x00
        push 28h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 39 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x39
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 46 49 E7 FF: call 0x58485ac0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x49
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1E 1D E7 FF: call 0x58482ea0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x1d
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B3 38 E7 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x38
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes A1 00 06 96 58: mov eax, dword ptr [0x58960600]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 24h], eax
        push 0
        push 64h
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
