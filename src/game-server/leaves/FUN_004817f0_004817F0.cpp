// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004817F0 .. +0xCA bytes.
extern "C" __declspec(naked) void FUN_004817f0_004817F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c2c8h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        mov dword ptr [ebp - 14h], 0cccccccch
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 14h], ecx
        push -1
        push -1
        push 0
        push 28h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 98 7D 00 00: call 0x4895d0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0ca8h
        ; Exact mapped bytes E8 43 04 00 00: call 0x481c90
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 581cd8h
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 104h], 509h
        push 19h
        push 5c4428h
        push 400h
        ; Exact mapped bytes E8 BB B7 06 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb7
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0cbch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0cbch]
        mov byte ptr [edx], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 2C 6F 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
