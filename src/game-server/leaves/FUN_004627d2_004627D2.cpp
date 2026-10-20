// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004627D2 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_004627d2_004627D2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x462809
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 0d78h]
        mov cl, byte ptr [eax + 0b2h]
        and cl, 0fh
        and ecx, 0ffh
        cmp dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 7D 22: jge 0x46284b
        __asm _emit 0x7d
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 8]
        shl ecx, 6
        lea ecx, [eax + ecx + 0cb0h]
        ; Exact mapped bytes E8 1C 9C 01 00: call 0x47c45d
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, eax
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB B5: jmp 0x462800
        __asm _emit 0xeb
        __asm _emit 0xb5
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 60 0B FA FF: call 0x4033ba
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x0b
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 7C 5F 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x5f
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
