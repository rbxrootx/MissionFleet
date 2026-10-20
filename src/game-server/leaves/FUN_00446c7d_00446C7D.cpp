// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446C7D .. +0x178 bytes.
extern "C" __declspec(naked) void FUN_00446c7d_00446C7D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 178h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 170h], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 174h], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 17ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 180h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 184h], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 188h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8b0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 190h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 194h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 198h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 19ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8b0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8b4h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8b8h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8bch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8c0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0e4h], 0
        push 8
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1a0h
        push ecx
        ; Exact mapped bytes E8 DB 25 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        push 380h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 1a8h
        push edx
        ; Exact mapped bytes E8 C2 25 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 528h
        push eax
        ; Exact mapped bytes E8 AD 25 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        push 380h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 530h
        push ecx
        ; Exact mapped bytes E8 94 25 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 01 00 00: call 0x446f3a
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 EF 19 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x19
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
