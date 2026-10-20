// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045EA49 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_0045ea49_0045EA49() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E8 9A 6A 0D 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x6a
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 63 9D 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x9d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 9ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 0ch], eax
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 3A 9D 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x9d
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
