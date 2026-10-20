// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00516126 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_00516126_00516126() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        push 1dch
        push 5c8b74h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 1E 50 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        sub esp, 8
        mov ecx, esp
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 74 F8 01 00: call 0x5359c6
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 74 0A: je 0x516170
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        add eax, 10000h
        ; Exact mapped bytes EB 33: jmp 0x5161a3
        __asm _emit 0xeb
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 1C 26 5E 00: call dword ptr [0x5e261c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0E: je 0x516199
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        add edx, 50000h
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 07: jmp 0x5161a0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 10h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
