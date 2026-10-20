// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00519D05 .. +0x168 bytes.
extern "C" __declspec(naked) void FUN_00519d05_00519D05() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 34h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 EE 84 01 00: call 0x532208
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 2E 36 00 00: call 0x51d350
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 18: je 0x519d40
        __asm _emit 0x74
        __asm _emit 0x18
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 99 DC FC FF: call 0x4e79cd
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xdc
        __asm _emit 0xfc
        __asm _emit 0xff
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 0D DC FC FF: call 0x4e794d
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        push 0
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 64 7E 01 00: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        cmp dword ptr [eax + 44h], 0
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x519ddd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 4]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 69: je 0x519dcf
        __asm _emit 0x74
        __asm _emit 0x69
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 54 86 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 34h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        sub eax, 1
        cmp eax, 1
        ; Exact mapped bytes 7D 09: jge 0x519d8b
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 38h], 1
        ; Exact mapped bytes EB 1A: jmp 0x519da5
        __asm _emit 0xeb
        __asm _emit 0x1a
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 2F 86 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 34h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        sub eax, 1
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 40 87 01 00: call 0x53250d
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x519ddd
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov dword ptr [ebp - 8], 1
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 34h]
        cmp dword ptr [eax + 44h], 0
        ; Exact mapped bytes 75 09: jne 0x519def
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 34h]
        cmp dword ptr [ecx + 40h], 0
        ; Exact mapped bytes 75 4C: jne 0x519e3b
        __asm _emit 0x75
        __asm _emit 0x4c
        push 0
        push 0
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 38h]
        mov ecx, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 28h
        ; Exact mapped bytes E8 AD 85 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 90 85 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 61 2E 00 00: call 0x51cc9c
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        add edx, 28h
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 38h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
