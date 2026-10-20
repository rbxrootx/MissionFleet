// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851E580 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_5851e580_5851E580() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 0F 8D F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 FE 8C F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x8c
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 50 99 F6 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x99
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 AC 03 00 00: call 0x5851e980
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 55 99 F6 FF: call 0x58487f40
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x99
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        add eax, 18h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebp - 1ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
