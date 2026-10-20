// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00474EC0 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_00474ec0_00474EC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [eax + 10h]
        sar ecx, 0ch
        mov edx, dword ptr [ebp + 8]
        lea eax, [edx + ecx*8 + 18h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        add ecx, edx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 10h]
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0f1h
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx], 0f0h
        ; Exact mapped bytes 75 20: jne 0x474f28
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes A1 3C 74 68 00: mov eax, dword ptr [0x68743c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        ; Exact mapped bytes A3 3C 74 68 00: mov dword ptr [0x68743c], eax
        __asm _emit 0xa3
        __asm _emit 0x3c
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 3C 74 68 00 20: cmp dword ptr [0x68743c], 0x20
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x20
        ; Exact mapped bytes 75 0A: jne 0x474f28
        __asm _emit 0x75
        __asm _emit 0x0a
        push 10h
        ; Exact mapped bytes E8 AB FD FF FF: call 0x474cd0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
