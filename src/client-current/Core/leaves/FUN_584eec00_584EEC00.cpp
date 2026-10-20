// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EEC00 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_584eec00_584EEC00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 10h]
        not eax
        mov dword ptr [ebp + 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        mov dword ptr [ebp + 0ch], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2F: je 0x584eec55
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp + 8]
        movzx ecx, byte ptr [eax]
        xor ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        mov dword ptr [ebp + 8], edx
        mov eax, dword ptr [ebp + 10h]
        shr eax, 8
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffh
        mov edx, dword ptr [ebp - 0ch]
        xor eax, dword ptr [edx + ecx*4]
        mov dword ptr [ebp + 10h], eax
        ; Exact mapped bytes EB BC: jmp 0x584eec11
        __asm _emit 0xeb
        __asm _emit 0xbc
        mov eax, dword ptr [ebp + 10h]
        not eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
