// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58976F00 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_58976f00() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push 0eeh
        push esi
        ; Exact mapped bytes E8 40 FE FF FF: call 0x58976d50
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0eh
        push esi
        ; Exact mapped bytes E8 98 FE FF FF: call 0x58976db0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 41h
        push esi
        ; Exact mapped bytes E8 50 FE FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 64h
        push esi
        ; Exact mapped bytes E8 48 FE FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 6fh
        push esi
        ; Exact mapped bytes E8 40 FE FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 62h
        push esi
        ; Exact mapped bytes E8 38 FE FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 65h
        push esi
        ; Exact mapped bytes E8 30 FE FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 64h
        push esi
        ; Exact mapped bytes E8 68 FE FF FF: call 0x58976db0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 40h
        push 0
        push esi
        ; Exact mapped bytes E8 5D FE FF FF: call 0x58976db0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push esi
        ; Exact mapped bytes E8 55 FE FF FF: call 0x58976db0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 40h]
        add esp, 10h
        sub eax, 3
        ; Exact mapped bytes 74 1F: je 0x58976f85
        __asm _emit 0x74
        __asm _emit 0x1f
        sub eax, 2
        ; Exact mapped bytes 74 0D: je 0x58976f78
        __asm _emit 0x74
        __asm _emit 0x0d
        push 0
        push esi
        ; Exact mapped bytes E8 FD FD FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        pop esi
        ret
        push 2
        push esi
        ; Exact mapped bytes E8 F0 FD FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        pop esi
        ret
        push 1
        push esi
        ; Exact mapped bytes E8 E3 FD FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        pop esi
        ret
    }
}
