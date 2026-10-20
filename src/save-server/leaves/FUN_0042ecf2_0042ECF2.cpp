// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042ECF2 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_0042ecf2_0042ECF2() {
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
        ; Exact mapped bytes 76 06: jbe 0x42ed25
        __asm _emit 0x76
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C2 76 03 00: call 0x4663f0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x76
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x42ed43
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 73 13: jae 0x42ed5e
        __asm _emit 0x73
        __asm _emit 0x13
        ; Exact mapped bytes E8 B0 76 03 00: call 0x466400
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x76
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4], eax
        ; Exact mapped bytes EB DC: jmp 0x42ed3a
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 10h], 0
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 7E 60 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
