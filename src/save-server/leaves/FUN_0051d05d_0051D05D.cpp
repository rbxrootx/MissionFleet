// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051D05D .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_0051d05d_0051D05D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 0dch
        push 6778d4h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 E4 D1 FB FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xd1
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x51d099
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ddh
        push 6778d4h
        ; Exact mapped bytes E8 AC BC 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51d099
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x51d07c
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 90 B6 68 00: call dword ptr [0x68b690]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 07 51 01 00: call 0x5321d5
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0
        push 0
        lea ecx, [ebp - 10h]
        push ecx
        push 2
        push 0
        push 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 DC B3 68 00: call dword ptr [0x68b3dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xb3
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
