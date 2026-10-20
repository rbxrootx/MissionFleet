// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050890F .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_0050890f_0050890F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 5C FD FF FF: call 0x508682
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x508933
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 4C: jmp 0x50897f
        __asm _emit 0xeb
        __asm _emit 0x4c
        cmp dword ptr [ebp + 8], 0e150h
        ; Exact mapped bytes 74 1D: je 0x508959
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp dword ptr [ebp + 8], 0e151h
        ; Exact mapped bytes 74 14: je 0x508959
        __asm _emit 0x74
        __asm _emit 0x14
        push 192h
        push 5cb374h
        ; Exact mapped bytes E8 AC C0 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x508959
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x508933
        __asm _emit 0x75
        __asm _emit 0xd4
        xor edx, edx
        cmp dword ptr [ebp + 8], 0e151h
        sete dl
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 F4 00 00 00: call dword ptr [edx + 0xf4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
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
