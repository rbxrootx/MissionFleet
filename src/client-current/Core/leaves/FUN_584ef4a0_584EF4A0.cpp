// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EF4A0 .. +0x1CA bytes.
extern "C" __declspec(naked) void FUN_584ef4a0_584EF4A0() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 4004ch
        ; Exact mapped bytes E8 43 26 34 00: call 0x58831af0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x26
        __asm _emit 0x34
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 40048h], ecx
        mov dword ptr [ebp - 40028h], 0
        mov dword ptr [ebp - 40030h], 0
        mov dword ptr [ebp - 4004ch], 0
        push 40000h
        push 0
        lea eax, [ebp - 40024h]
        push eax
        ; Exact mapped bytes E8 22 D9 35 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xd9
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 00 45 89 58: call dword ptr [0x58894500]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 40034h], eax
        cmp dword ptr [ebp - 40034h], 0
        ; Exact mapped bytes 75 0A: jne 0x584ef51c
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 4
        ; Exact mapped bytes E9 3E 01 00 00: jmp 0x584ef65a
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 80000000h
        push 0
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 40034h]
        push eax
        ; Exact mapped bytes FF 15 FC 44 89 58: call dword ptr [0x588944fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 4002ch], eax
        cmp dword ptr [ebp - 4002ch], 0
        ; Exact mapped bytes 75 0A: jne 0x584ef551
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 4
        ; Exact mapped bytes E9 09 01 00 00: jmp 0x584ef65a
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 40028h], 20h
        push 0
        lea ecx, [ebp - 40028h]
        push ecx
        lea edx, [ebp - 24h]
        push edx
        push 5
        mov eax, dword ptr [ebp - 4002ch]
        push eax
        ; Exact mapped bytes FF 15 08 45 89 58: call dword ptr [0x58894508]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 4003ch], eax
        cmp dword ptr [ebp - 4003ch], 0
        ; Exact mapped bytes 75 0A: jne 0x584ef590
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 4
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x584ef65a
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 FF 86 36 00: call 0x58857c98
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40028h], eax
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 40028h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 40028h]
        push ecx
        ; Exact mapped bytes E8 89 1A 34 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x1a
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40040h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 40040h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 40028h]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 2F D8 35 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 0
        lea ecx, [ebp - 40044h]
        push ecx
        mov edx, dword ptr [ebp - 4002ch]
        push edx
        ; Exact mapped bytes FF 15 04 45 89 58: call dword ptr [0x58894504]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 40038h]
        push eax
        mov ecx, dword ptr [ebp - 40044h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp - 40030h]
        push eax
        mov ecx, dword ptr [ebp - 4002ch]
        push ecx
        ; Exact mapped bytes FF 15 10 45 89 58: call dword ptr [0x58894510]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 40030h]
        add edx, dword ptr [ebp - 40038h]
        mov dword ptr [ebp - 40030h], edx
        cmp dword ptr [ebp - 40038h], 0
        ; Exact mapped bytes 75 A6: jne 0x584ef5e4
        __asm _emit 0x75
        __asm _emit 0xa6
        mov eax, dword ptr [ebp - 4002ch]
        push eax
        ; Exact mapped bytes FF 15 14 45 89 58: call dword ptr [0x58894514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 40034h]
        push ecx
        ; Exact mapped bytes FF 15 14 45 89 58: call dword ptr [0x58894514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 EC 19 34 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x19
        __asm _emit 0x34
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
