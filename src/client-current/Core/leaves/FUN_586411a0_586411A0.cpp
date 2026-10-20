// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586411A0 .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_586411a0_586411A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 C7 00 00 00: je 0x5864127a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586411c5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 98h]
        ; Exact mapped bytes E8 14 85 EE FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 39: jge 0x5864121a
        __asm _emit 0x7d
        __asm _emit 0x39
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 98h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 2dh
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 07 FA 17 00: call 0x587c0c10
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xfa
        __asm _emit 0x17
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 D1 F9 20 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf9
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x58641218
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 62: jmp 0x5864127a
        __asm _emit 0xeb
        __asm _emit 0x62
        ; Exact mapped bytes EB A2: jmp 0x586411bc
        __asm _emit 0xeb
        __asm _emit 0xa2
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 98h]
        mov dword ptr [ebp - 10h], ecx
        push 83add7h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 2dh
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D7 F2 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xf2
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 98h]
        mov dword ptr [ebp - 14h], ecx
        push 83add7h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 0ch
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A7 F2 17 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf2
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
