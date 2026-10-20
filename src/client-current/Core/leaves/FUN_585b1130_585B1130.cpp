// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B1130 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_585b1130_585B1130() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 52: jl 0x585b1191
        __asm _emit 0x7c
        __asm _emit 0x52
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 7F 4C: jg 0x585b1191
        __asm _emit 0x7f
        __asm _emit 0x4c
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 90h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes A1 94 20 96 58: mov eax, dword ptr [0x58962094]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5D AC 20 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xac
        __asm _emit 0x20
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 90h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 90h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
