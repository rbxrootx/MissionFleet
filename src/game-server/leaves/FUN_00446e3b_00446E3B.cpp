// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446E3B .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_00446e3b_00446E3B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 150h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 16ch], 0ffffffffh
        push 5b68f4h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 14ch
        ; Exact mapped bytes E8 8A 6C 0A 00: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x6c
        __asm _emit 0x0a
        __asm _emit 0x00
        push 28h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 908h
        push edx
        ; Exact mapped bytes E8 EA 24 06 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 4D 19 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x19
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
