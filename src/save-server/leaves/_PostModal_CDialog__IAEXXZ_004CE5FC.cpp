// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CE5FC .. +0x5C bytes.
extern "C" __declspec(naked) void _PostModal_CDialog__IAEXXZ_004CE5FC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 47 1D 00 00: call 0x4d0351
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 45 14 00 00: call 0x4cfa57
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 54h]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x4ce632
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 54h]
        push eax
        ; Exact mapped bytes FF 15 B8 BF 68 00: call dword ptr [0x68bfb8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 54h], 0
        ; Exact mapped bytes E8 2F 34 06 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x4ce654
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2C 82 02 00: call 0x4f6880
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
