// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048C8A2 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_0048c8a2_0048C8A2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 76 06: jbe 0x48c8d5
        __asm _emit 0x76
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 12 CF 01 00: call 0x4a97f0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x48c8f3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 73 13: jae 0x48c90e
        __asm _emit 0x73
        __asm _emit 0x13
        ; Exact mapped bytes E8 00 CF 01 00: call 0x4a9800
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4], eax
        ; Exact mapped bytes EB DC: jmp 0x48c8ea
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 10h], 0
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 BE BE 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
