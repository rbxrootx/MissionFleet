// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B037 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_5883b037_5883B037() {
    __asm {
        push 1
        push 40h
        push 1
        ; Exact mapped bytes E8 08 F2 FF FF: call 0x5883a24a
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x5883b04b
        __asm _emit 0x74
        __asm _emit 0x02
        mov dword ptr [eax], eax
        lea ecx, [eax + 4]
        test ecx, ecx
        ; Exact mapped bytes 74 02: je 0x5883b054
        __asm _emit 0x74
        __asm _emit 0x02
        mov dword ptr [ecx], eax
        lea ecx, [eax + 8]
        test ecx, ecx
        ; Exact mapped bytes 74 02: je 0x5883b05d
        __asm _emit 0x74
        __asm _emit 0x02
        mov dword ptr [ecx], eax
        ; Exact mapped bytes 66 C7 40 0C 01 01: mov word ptr [eax + 0xc], 0x101
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x01
        ret
    }
}
