// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586126D0 .. +0x130 bytes.
extern "C" __declspec(naked) void FUN_586126d0_586126D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6F FD FF FF: call 0x58612450
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 28h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 23 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x23
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BB 96 1A 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x96
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
        ; Exact mapped bytes E8 6E 23 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x23
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 124h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 49 38 E7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x38
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 124h]
        mov dword ptr [ebp - 20h], edx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 2A 38 E7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x38
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 124h]
        mov dword ptr [ebp - 24h], edx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 0C 38 E7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x38
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 124h]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 ED 37 E7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x37
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 124h]
        mov dword ptr [ebp - 2ch], eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 CE 37 E7 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x37
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B6 5D EC FF: call 0x584d8580
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x5d
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8E 32 E7 FF: call 0x58485a60
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x32
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 22 E7 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x22
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 30h], ecx
        push 0
        push 64h
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 D0: call dword ptr [ebp - 0x30]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
