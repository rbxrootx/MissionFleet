// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F20EA .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_004f20ea_004F20EA() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 343h
        push 678234h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 59 81 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 3ch]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 14: je 0x4f2126
        __asm _emit 0x74
        __asm _emit 0x14
        push 344h
        push 678234h
        ; Exact mapped bytes E8 1F 6C 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f2126
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x4f2107
        __asm _emit 0x75
        __asm _emit 0xdb
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 28h
        ; Exact mapped bytes E8 DE FC FC FF: call 0x4c1e1b
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xfc
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 28h
        ; Exact mapped bytes E8 38 FB FC FF: call 0x4c1c81
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xfb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
