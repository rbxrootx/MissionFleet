// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586D5B90 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_586d5b90_586D5B90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 74h], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 74h], 40000000h
        ; Exact mapped bytes 75 2F: jne 0x586d5bdd
        __asm _emit 0x75
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 184h]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7C 9C DC FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x9c
        __asm _emit 0xdc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 184h]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 06 02 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x586d5c0a
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 184h]
        mov dword ptr [ebp - 10h], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4D 9C DC FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x9c
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 184h]
        mov dword ptr [ebp - 14h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D7 01 DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
