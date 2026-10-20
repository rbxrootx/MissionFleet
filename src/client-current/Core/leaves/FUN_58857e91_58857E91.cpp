// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58857E91 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_58857e91_58857E91() {
    __asm {
        mov edi, edi
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi]
        test esi, esi
        ; Exact mapped bytes 74 25: je 0x58857ec2
        __asm _emit 0x74
        __asm _emit 0x25
        cmp dword ptr [esi + 8], 0
        ; Exact mapped bytes 74 09: je 0x58857eac
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [esi + 8]
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [esi + 0ch], 0
        ; Exact mapped bytes 74 09: je 0x58857ebb
        __asm _emit 0x74
        __asm _emit 0x09
        push dword ptr [esi + 0ch]
        ; Exact mapped bytes FF 15 E8 42 89 58: call dword ptr [0x588942e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push esi
        ; Exact mapped bytes E8 4F 4D 01 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        and dword ptr [edi], 0
        pop edi
        pop esi
        ret
    }
}
