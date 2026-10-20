// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426E16 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_00426e16_00426E16() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x426e22
        __asm _emit 0x75
        __asm _emit 0x02
        pop ebp
        ret
        ; Exact mapped bytes 83 3D 4C FF 44 00 00: cmp dword ptr [0x44ff4c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 12: jne 0x426e3d
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 66 8B 4D 0C: mov cx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 66 81 F9 FF 00: cmp cx, 0xff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 77 39: ja 0x426e6f
        __asm _emit 0x77
        __asm _emit 0x39
        push 1
        mov byte ptr [eax], cl
        pop eax
        pop ebp
        ret
        lea ecx, [ebp + 8]
        and dword ptr [ebp + 8], 0
        push ecx
        push 0
        ; Exact mapped bytes FF 35 CC AE 44 00: push dword ptr [0x44aecc]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xcc
        __asm _emit 0xae
        __asm _emit 0x44
        __asm _emit 0x00
        push eax
        lea eax, [ebp + 0ch]
        push 1
        push eax
        push 220h
        ; Exact mapped bytes FF 35 5C FF 44 00: push dword ptr [0x44ff5c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 88 C2 43 00: call dword ptr [0x43c288]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x426e6f
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0E: je 0x426e7d
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes E8 66 AD FF FF: call 0x421bda
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 2ah
        or eax, 0ffffffffh
        pop ebp
        ret
    }
}
