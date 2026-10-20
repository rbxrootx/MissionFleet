// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E7352 .. +0x6A bytes.
extern "C" __declspec(naked) void _AddTail_CPtrList__QAEPAU__POSITION__PAX_Z_004E7352() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 97h
        push 5c8f3ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 F2 3D 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EC FD FF FF: call 0x4e716b
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 0D: je 0x4e73a1
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB 09: jmp 0x4e73aa
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
