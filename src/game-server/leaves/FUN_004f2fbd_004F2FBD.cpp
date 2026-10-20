// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F2FBD .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_004f2fbd_004F2FBD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        ; Exact mapped bytes E8 8D 1F 05 00: call 0x544f55
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x1f
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0cch]
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6D 8B 04 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4f2ff4
        __asm _emit 0x74
        __asm _emit 0x11
        push 0
        push 0
        push 401h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E5 8B 04 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 108h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 25: je 0x4f302b
        __asm _emit 0x74
        __asm _emit 0x25
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1F: je 0x4f302b
        __asm _emit 0x74
        __asm _emit 0x1f
        push 1
        ; Exact mapped bytes FF 15 BC 25 5E 00: call dword ptr [0x5e25bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        test ecx, ecx
        ; Exact mapped bytes 7C 10: jl 0x4f302b
        __asm _emit 0x7c
        __asm _emit 0x10
        push -1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 90 E4 00 00 00: call dword ptr [eax + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
