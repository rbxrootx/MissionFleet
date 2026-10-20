// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00414F2E .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_00414f2e_00414F2E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 144h]
        ; Exact mapped bytes E8 6F 48 0D 00: call 0x4e97d1
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x48
        __asm _emit 0x0d
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 74 05: je 0x414f6d
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 33: jmp 0x414fa0
        __asm _emit 0xeb
        __asm _emit 0x33
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 53 FF FE FF: call 0x404ecc
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 74 1B: je 0x414f9d
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 144h]
        ; Exact mapped bytes E8 B6 E9 11 00: call 0x53394e
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 03: jmp 0x414fa0
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 36 38 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
