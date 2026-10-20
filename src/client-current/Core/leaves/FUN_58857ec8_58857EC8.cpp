// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58857EC8 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_58857ec8_58857EC8() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        ; Exact mapped bytes E8 1E 0D 01 00: call 0x58868bf1
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x58857f15
        __asm _emit 0x74
        __asm _emit 0x3e
        mov esi, dword ptr [eax + 360h]
        test esi, esi
        ; Exact mapped bytes 74 34: je 0x58857f15
        __asm _emit 0x74
        __asm _emit 0x34
        cmp byte ptr [esi + 10h], 0
        ; Exact mapped bytes 74 05: je 0x58857eec
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 A2 7A 01 00: call 0x5886f98e
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        cmp eax, -1
        ; Exact mapped bytes 74 0B: je 0x58857eff
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x58857eff
        __asm _emit 0x74
        __asm _emit 0x07
        push eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [esi + 0ch]
        cmp eax, -1
        ; Exact mapped bytes 74 0E: je 0x58857f15
        __asm _emit 0x74
        __asm _emit 0x0e
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x58857f15
        __asm _emit 0x74
        __asm _emit 0x0a
        push dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 64 42 89 58: call dword ptr [0x58894264]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 68 42 89 58: call dword ptr [0x58894268]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
    }
}
