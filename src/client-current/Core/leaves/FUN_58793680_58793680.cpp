// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58793680 .. +0x10D bytes.
extern "C" __declspec(naked) void FUN_58793680_58793680() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 DC 72 FF FF: call 0x5878a970
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 7ch], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 80h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 84h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 88h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x587936d7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        ; Exact mapped bytes E8 5E 4B CF FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x4b
        __asm _emit 0xcf
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F 83 92 00 00 00: jae 0x5879377d
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add eax, 64h
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 10 43 CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x43
        __asm _emit 0xcf
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 73: je 0x58793778
        __asm _emit 0x74
        __asm _emit 0x73
        mov edx, dword ptr [ebp - 4]
        add edx, 64h
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F6 42 CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x42
        __asm _emit 0xcf
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 59: je 0x58793778
        __asm _emit 0x74
        __asm _emit 0x59
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DC 42 CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x42
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x58793756
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5879375d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 9E 42 CF FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x42
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [eax], 0
        ; Exact mapped bytes E9 51 FF FF FF: jmp 0x587936ce
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        ; Exact mapped bytes E8 68 49 CF FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x49
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
