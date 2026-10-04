// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5876D0A0 .. +0xC6 bytes.
// Source symbol alias: FUN_5876d0a0.
extern "C" __declspec(naked) void FUN_5876d0a0() {
    __asm {
        // 0x5876D0A0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5876D0A4: push esi
        __asm _emit 0x56
        // 0x5876D0A5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5876D0A7: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876D0AB: add dword ptr [esi + 0x5c], ecx
        __asm _emit 0x01
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5876D0AE: add dword ptr [esi + 0x58], eax
        __asm _emit 0x01
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x5876D0B1: push ecx
        __asm _emit 0x51
        // 0x5876D0B2: push eax
        __asm _emit 0x50
        // 0x5876D0B3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876D0B5: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x5D
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876D0BA: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876D0BE: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5876D0C2: push eax
        __asm _emit 0x50
        // 0x5876D0C3: push ecx
        __asm _emit 0x51
        // 0x5876D0C4: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D0CA: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x5D
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876D0CF: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876D0D3: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5876D0D7: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D0DD: push edx
        __asm _emit 0x52
        // 0x5876D0DE: push eax
        __asm _emit 0x50
        // 0x5876D0DF: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x5D
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876D0E4: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876D0E8: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5876D0EC: push ecx
        __asm _emit 0x51
        // 0x5876D0ED: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D0F3: push edx
        __asm _emit 0x52
        // 0x5876D0F4: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x5D
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876D0F9: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876D0FD: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5876D101: push eax
        __asm _emit 0x50
        // 0x5876D102: push ecx
        __asm _emit 0x51
        // 0x5876D103: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D109: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x5D
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876D10E: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876D112: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5876D116: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D11C: push edx
        __asm _emit 0x52
        // 0x5876D11D: push eax
        __asm _emit 0x50
        // 0x5876D11E: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x5C
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876D123: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876D127: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5876D12B: push ecx
        __asm _emit 0x51
        // 0x5876D12C: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D132: push edx
        __asm _emit 0x52
        // 0x5876D133: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x5C
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876D138: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876D13C: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5876D140: push eax
        __asm _emit 0x50
        // 0x5876D141: push ecx
        __asm _emit 0x51
        // 0x5876D142: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D148: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x5C
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876D14D: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876D151: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5876D155: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D15B: push edx
        __asm _emit 0x52
        // 0x5876D15C: push eax
        __asm _emit 0x50
        // 0x5876D15D: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x5C
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876D162: pop esi
        __asm _emit 0x5E
        // 0x5876D163: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
