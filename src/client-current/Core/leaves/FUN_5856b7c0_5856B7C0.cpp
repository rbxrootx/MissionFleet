// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856B7C0 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_5856b7c0_5856B7C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a9760h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 7ch], -1
        ; Exact mapped bytes 74 40: je 0x5856b81b
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 74h], 0
        ; Exact mapped bytes 74 37: je 0x5856b81b
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 17: je 0x5856b80a
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 07: jmp 0x5856b811
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 74h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD 9F 24 00: call 0x587b57d0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x9f
        __asm _emit 0x24
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
