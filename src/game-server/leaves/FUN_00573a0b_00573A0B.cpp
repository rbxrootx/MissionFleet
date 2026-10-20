// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00573A0B .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_00573a0b_00573A0B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 99 D4 FB FF: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        push edx
        push 0
        push 0
        ; Exact mapped bytes FF 15 DC 23 5E 00: call dword ptr [0x5e23dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        push 0
        ; Exact mapped bytes FF 15 FC 24 5E 00: call dword ptr [0x5e24fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x573a51
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 5B C3 F5 FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc3
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 58 D4 FB FF: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        push edx
        push 0
        push 0
        ; Exact mapped bytes FF 15 DC 23 5E 00: call dword ptr [0x5e23dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
