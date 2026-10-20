// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B6DB0 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_584b6db0_584B6DB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        ; Exact mapped bytes E8 FC DB FC FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xdb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 58h]
        ; Exact mapped bytes E8 03 34 FF FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 58h]
        ; Exact mapped bytes E8 EE 33 FF FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov eax, dword ptr [ebp - 1ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        sub edx, eax
        sub edx, 0ah
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8D E8 2F 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
