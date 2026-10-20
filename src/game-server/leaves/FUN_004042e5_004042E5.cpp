// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004042E5 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_004042e5_004042E5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 F7 11 13 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x11
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 C0 44 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 9ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 8], ecx
        push 400h
        push 0
        mov edx, dword ptr [ebp - 8]
        add edx, 0ch
        push edx
        ; Exact mapped bytes E8 28 50 0A 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x50
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x40435d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 7D 19: jge 0x40437c
        __asm _emit 0x7d
        __asm _emit 0x19
        mov edx, 1
        mov ecx, dword ptr [ebp - 4]
        shl edx, cl
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*4 + 40ch], edx
        ; Exact mapped bytes EB D8: jmp 0x404354
        __asm _emit 0xeb
        __asm _emit 0xd8
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 59 44 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x44
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
